#
# Copyright (C) 2009 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

define Profile/Default
	NAME:=Default Profile (all drivers)
	PACKAGES:= \
		kmod-ath9k kmod-usb-core kmod-usb-ohci kmod-usb2 swconfig \
		wpad-mini kmod-ledtrig-usbdev
endef

define Profile/Default/Description
	Default package set compatible with most boards.
endef
$(eval $(call Profile,Default))

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKCADisplayMonitor, BKDisplayController, BKHIDClientConnectionManager, BKHIDEventDeliveryManager, BKKeyboardHIDEventProcessor, BKMousePointerDeviceAvailabilityMonitor, BKMousePointerServiceServer, BKOrientationManager, BKSLocalDefaults, BKSmartCoverHIDEventProcessor, BKTouchDeliveryPolicyServer, BKTouchPadManager;
@protocol BKDirectHitTestEventDispatcher;

@interface BKMousePointerControllerConfiguration : NSObject
{
    _Bool _displayLinkDisabled;	// 8 = 0x8
    _Bool _shouldUseHighFrequencyAttributeOption;	// 9 = 0x9
    BKCADisplayMonitor *_displayMonitor;	// 16 = 0x10
    BKOrientationManager *_orientationManager;	// 24 = 0x18
    BKTouchPadManager *_touchPadManager;	// 32 = 0x20
    BKSmartCoverHIDEventProcessor *_smartCoverEventProcessor;	// 40 = 0x28
    BKKeyboardHIDEventProcessor *_keyboardEventProcessor;	// 48 = 0x30
    BKHIDEventDeliveryManager *_eventDeliveryManager;	// 56 = 0x38
    BKDisplayController *_displayController;	// 64 = 0x40
    BKSLocalDefaults *_localDefaults;	// 72 = 0x48
    BKHIDClientConnectionManager *_clientConnectionManager;	// 80 = 0x50
    BKMousePointerDeviceAvailabilityMonitor *_deviceAvailabilityMonitor;	// 88 = 0x58
    BKMousePointerServiceServer *_serviceServer;	// 96 = 0x60
    BKTouchDeliveryPolicyServer *_touchDeliveryPolicyServer;	// 104 = 0x68
    id <BKDirectHitTestEventDispatcher> _eventDispatcher;	// 112 = 0x70
    Class _displayLinkClass;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010004e728
@property(nonatomic) _Bool shouldUseHighFrequencyAttributeOption; // @synthesize shouldUseHighFrequencyAttributeOption=_shouldUseHighFrequencyAttributeOption;
@property(nonatomic) _Bool displayLinkDisabled; // @synthesize displayLinkDisabled=_displayLinkDisabled;
@property(retain, nonatomic) Class displayLinkClass; // @synthesize displayLinkClass=_displayLinkClass;
@property(retain, nonatomic) id <BKDirectHitTestEventDispatcher> eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
@property(retain, nonatomic) BKTouchDeliveryPolicyServer *touchDeliveryPolicyServer; // @synthesize touchDeliveryPolicyServer=_touchDeliveryPolicyServer;
@property(retain, nonatomic) BKMousePointerServiceServer *serviceServer; // @synthesize serviceServer=_serviceServer;
@property(retain, nonatomic) BKMousePointerDeviceAvailabilityMonitor *deviceAvailabilityMonitor; // @synthesize deviceAvailabilityMonitor=_deviceAvailabilityMonitor;
@property(retain, nonatomic) BKHIDClientConnectionManager *clientConnectionManager; // @synthesize clientConnectionManager=_clientConnectionManager;
@property(retain, nonatomic) BKSLocalDefaults *localDefaults; // @synthesize localDefaults=_localDefaults;
@property(retain, nonatomic) BKDisplayController *displayController; // @synthesize displayController=_displayController;
@property(retain, nonatomic) BKHIDEventDeliveryManager *eventDeliveryManager; // @synthesize eventDeliveryManager=_eventDeliveryManager;
@property(retain, nonatomic) BKKeyboardHIDEventProcessor *keyboardEventProcessor; // @synthesize keyboardEventProcessor=_keyboardEventProcessor;
@property(retain, nonatomic) BKSmartCoverHIDEventProcessor *smartCoverEventProcessor; // @synthesize smartCoverEventProcessor=_smartCoverEventProcessor;
@property(retain, nonatomic) BKTouchPadManager *touchPadManager; // @synthesize touchPadManager=_touchPadManager;
@property(retain, nonatomic) BKOrientationManager *orientationManager; // @synthesize orientationManager=_orientationManager;
@property(retain, nonatomic) BKCADisplayMonitor *displayMonitor; // @synthesize displayMonitor=_displayMonitor;

@end

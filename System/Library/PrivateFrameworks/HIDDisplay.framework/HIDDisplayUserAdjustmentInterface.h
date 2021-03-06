/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}

@property (readonly) BOOL valid; 
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)valid;
-(id)get:(id*)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(BOOL)invalidate:(id*)arg1 ;
-(id)getHIDDevices;
-(BOOL)setupInterface;
-(BOOL)set:(id)arg1 error:(id*)arg2 ;
@end


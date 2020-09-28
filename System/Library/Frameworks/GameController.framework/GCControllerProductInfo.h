/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol GCControllerProductInfo <GCControllerComponent>
@property (copy,readonly) NSString * productCategory; 
@property (copy,readonly) NSString * vendorName; 
@property (getter=isAttachedToDevice,copy,readonly) NSNumber * attachedToDevice; 
@required
-(NSString *)vendorName;
-(NSString *)productCategory;
-(id)isAttachedToDevice;

@end

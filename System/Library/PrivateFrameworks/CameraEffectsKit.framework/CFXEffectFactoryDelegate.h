/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/JFXEffectFactoryDelegate.h>

@class NSString;

@interface CFXEffectFactoryDelegate : NSObject <JFXEffectFactoryDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)CFX_filterEffectsWithFactory:(id)arg1 ;
-(id)CFX_animojiEffectsWithFactory:(id)arg1 ;
-(id)CFX_overlayEffectsWithFactory:(id)arg1 ;
-(BOOL)CFX_disableExpensiveFilters;
-(BOOL)CFX_isExpensiveEffectID:(id)arg1 withFactory:(id)arg2 ;
-(BOOL)CFX_enoughPowerForStyleTransfer;
-(id)CFX_styleTransferEffectIDs;
-(void)effectFactory:(id)arg1 effectIDsAvailableForType:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)styleTransferEffectIDsForFactory:(id)arg1 ;
-(BOOL)effectFactory:(id)arg1 isStyleTransferEffectID:(id)arg2 ;
@end


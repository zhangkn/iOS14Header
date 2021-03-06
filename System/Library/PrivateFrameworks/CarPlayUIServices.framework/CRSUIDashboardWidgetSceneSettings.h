/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UICarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetSceneSettings.h>

@protocol CRSUIDashboardWidgetSceneSettings <CRSUIMapStyleProviding>
@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@required
-(NSObject*<OS_xpc_object>)endpoint;
-(unsigned long long)widgetStyle;

@end


@class NSString;

@interface CRSUIDashboardWidgetSceneSettings : UICarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings>

@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(long long)mapStyle;
-(unsigned long long)widgetStyle;
@end


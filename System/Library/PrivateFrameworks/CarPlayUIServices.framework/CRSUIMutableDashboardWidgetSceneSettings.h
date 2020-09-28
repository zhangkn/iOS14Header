/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableCarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetSceneSettings.h>
#import <libobjc.A.dylib/CRSUIMutableMapStyleProviding.h>

@class NSString;

@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings, CRSUIMutableMapStyleProviding>

@property (assign,nonatomic) unsigned long long widgetStyle; 
@property (nonatomic,copy) NSObject*<OS_xpc_object> endpoint; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(long long)mapStyle;
-(void)setMapStyle:(long long)arg1 ;
-(unsigned long long)widgetStyle;
-(void)setWidgetStyle:(unsigned long long)arg1 ;
@end

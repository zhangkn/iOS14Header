/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXHomeScreenWidgetPersonalityProviding.h>

@class NSString;

@interface ATXHomeScreenWidgetPersonality : NSObject <NSSecureCoding, ATXHomeScreenWidgetPersonalityProviding> {

	NSString* _extensionBundleId;
	NSString* _kind;

}

@property (nonatomic,readonly) NSString * extensionBundleId;                    //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,readonly) NSString * kind;                                 //@synthesize kind=_kind - In the implementation block
@property (readonly) ATXHomeScreenWidgetPersonality * personality; 
+(BOOL)supportsSecureCoding;
+(id)stringRepresentationForExtensionBundleId:(id)arg1 kind:(id)arg2 ;
+(id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)arg1 ;
+(id)widgetKindForWidgetPersonalityStringRepresentation:(id)arg1 ;
-(NSString *)extensionBundleId;
-(NSString *)kind;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXHomeScreenWidgetPersonality *)personality;
-(void)encodeWithCoder:(id)arg1 ;
-(id)stringRepresentation;
-(unsigned long long)hash;
-(id)description;
-(id)initWithExtensionBundleId:(id)arg1 kind:(id)arg2 ;
@end

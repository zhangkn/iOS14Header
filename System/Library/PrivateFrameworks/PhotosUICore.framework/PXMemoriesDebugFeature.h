/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXProtoFeature.h>

@class NSString, NSArray, UIColor;

@interface PXMemoriesDebugFeature : NSObject <PXProtoFeature> {

	NSString* _featureLocalizedTitle;
	UIColor* _featureTintColor;
	unsigned long long _type;
	NSString* _localizedTitle;

}

@property (nonatomic,readonly) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedTypeStringValue; 
@property (nonatomic,readonly) long long featureKind; 
@property (nonatomic,readonly) long long featureGroupIndex; 
@property (nonatomic,readonly) NSString * featureLocalizedTitle;                 //@synthesize featureLocalizedTitle=_featureLocalizedTitle - In the implementation block
@property (nonatomic,readonly) NSArray * featurePeople; 
@property (nonatomic,readonly) double featureScore; 
@property (nonatomic,readonly) UIColor * featureTintColor;                       //@synthesize featureTintColor=_featureTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * featureSelectedTintColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_tintColorForFeatureType:(unsigned long long)arg1 ;
-(NSString *)featureLocalizedTitle;
-(UIColor *)featureTintColor;
-(long long)featureKind;
-(long long)featureGroupIndex;
-(id)initWithLocalizedTitle:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)localizedTypeStringValue;
-(NSString *)localizedTitle;
-(unsigned long long)type;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface EDPromotionMLModelInput : NSObject <MLFeatureProvider> {

	NSDictionary* _header_key_filtered;
	double _to_count;

}

@property (nonatomic,retain) NSDictionary * header_key_filtered;              //@synthesize header_key_filtered=_header_key_filtered - In the implementation block
@property (assign,nonatomic) double to_count;                                 //@synthesize to_count=_to_count - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithHeader_key_filtered:(id)arg1 to_count:(double)arg2 ;
-(NSDictionary *)header_key_filtered;
-(void)setHeader_key_filtered:(NSDictionary *)arg1 ;
-(double)to_count;
-(void)setTo_count:(double)arg1 ;
@end


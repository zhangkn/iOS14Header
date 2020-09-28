/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface iconclassification__generated__Input : NSObject <MLFeatureProvider> {

	MLMultiArray* _input_1;

}

@property (nonatomic,retain) MLMultiArray * input_1;              //@synthesize input_1=_input_1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(void)setInput_1:(MLMultiArray *)arg1 ;
-(MLMultiArray *)input_1;
-(id)initWithInput_1:(id)arg1 ;
@end

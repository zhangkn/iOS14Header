/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface backtapOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _model_output;

}

@property (nonatomic,retain) MLMultiArray * model_output;              //@synthesize model_output=_model_output - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithModel_output:(id)arg1 ;
-(MLMultiArray *)model_output;
-(void)setModel_output:(MLMultiArray *)arg1 ;
@end

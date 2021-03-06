/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLMultiArray;

@interface backtapInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _model_input;

}

@property (nonatomic,retain) MLMultiArray * model_input;              //@synthesize model_input=_model_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithModel_input:(id)arg1 ;
-(MLMultiArray *)model_input;
-(void)setModel_input:(MLMultiArray *)arg1 ;
@end


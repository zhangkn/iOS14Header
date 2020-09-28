/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString, NSArray;

@interface TSCHMultiDataLayerAnimationValues : NSObject {

	CALayer* mLayer;
	NSString* mKey;
	NSArray* mValues;
	NSArray* mKeyTimes;
	BOOL mNeedPresentationLayerValues;

}

@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSArray * values; 
@property (nonatomic,readonly) NSArray * keyTimes; 
@property (nonatomic,readonly) BOOL needPresentationLayerValues; 
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 ;
-(CALayer *)layer;
-(NSArray *)values;
-(NSString *)key;
-(NSArray *)keyTimes;
-(id)description;
-(id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
-(BOOL)needPresentationLayerValues;
@end

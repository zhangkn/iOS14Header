/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCChartViewDelegate;
@class NSString, NSObject, NSDictionary;

@interface CCChartViewSetupOptions : NSObject {

	NSString* config;
	NSString* rendererType;
	NSString* baseConfig;
	NSObject*<CCChartViewDelegate> delegate;
	NSDictionary* expressionFunctions;

}

@property (retain) NSString * config; 
@property (retain) NSDictionary * configDictionary; 
@property (retain) NSString * rendererType; 
@property (retain) NSString * baseConfig; 
@property (__weak) NSObject*<CCChartViewDelegate> delegate; 
@property (retain) NSDictionary * expressionFunctions; 
-(NSDictionary *)configDictionary;
-(NSString *)config;
-(void)setConfig:(NSString *)arg1 ;
-(void)setDelegate:(NSObject*<CCChartViewDelegate>)arg1 ;
-(NSObject*<CCChartViewDelegate>)delegate;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(NSString *)rendererType;
-(void)setRendererType:(NSString *)arg1 ;
-(void)setBaseConfig:(NSString *)arg1 ;
-(NSString *)baseConfig;
-(NSDictionary *)expressionFunctions;
-(void)setExpressionFunctions:(NSDictionary *)arg1 ;
@end

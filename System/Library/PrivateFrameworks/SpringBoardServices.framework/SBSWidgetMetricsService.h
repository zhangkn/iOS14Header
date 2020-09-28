/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSWidgetMetricsProviding;
@interface SBSWidgetMetricsService : NSObject {

	id<SBSWidgetMetricsProviding> _metricsProvider;

}

@property (nonatomic,__weak,readonly) id<SBSWidgetMetricsProviding> metricsProvider;              //@synthesize metricsProvider=_metricsProvider - In the implementation block
-(void)dealloc;
-(id<SBSWidgetMetricsProviding>)metricsProvider;
-(id)init;
-(id)initWithMetricsProvider:(id)arg1 ;
-(id)systemMetricsForWidget:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg1 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3 ;
@end

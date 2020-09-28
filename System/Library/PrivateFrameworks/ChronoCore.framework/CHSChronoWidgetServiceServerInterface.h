/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHSChronoWidgetServiceServerInterface <NSObject>
@optional
-(oneway void)setMetricsSpecification:(id)arg1;

@required
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
-(oneway void)applicationWithBundleIdentifierEnteredForeground:(id)arg1;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg1 inBundleWithIdentifier:(id)arg2 error:(id*)arg3;
-(oneway void)expireLocationGracePeriods;
-(oneway void)flushPowerlog;
-(oneway void)setConfiguredWidgetContainerDescriptors:(id)arg1;

@end

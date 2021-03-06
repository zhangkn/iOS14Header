/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol HFLightProfileValueSource <NSObject>
@required
-(BOOL)isNaturalLightingSupportedForProfile:(id)arg1;
-(BOOL)isNaturalLightingEnabledForProfile:(id)arg1;
-(id)writeNaturalLightEnabledState:(BOOL)arg1 forProfile:(id)arg2;
-(void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(id)arg2 completion:(/*^block*/id)arg3;

@end


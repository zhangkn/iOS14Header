/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol HFCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable>
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
@optional
-(id)cachedErrorForExecutionOfActionSet:(id)arg1;
-(id)cachedErrorForWriteToCharacteristic:(id)arg1;
-(void)executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;

@required
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
-(id)cachedValueForCharacteristic:(id)arg1;
-(id)readValuesForCharacteristics:(id)arg1;
-(id)writeValuesForCharacteristics:(id)arg1;

@end

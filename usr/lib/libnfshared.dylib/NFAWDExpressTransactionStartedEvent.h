/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCExpressTransactionStartedEvent, NSString;

@interface NFAWDExpressTransactionStartedEvent : NSObject <NFAWDEventProtocol> {

	unsigned _type;
	AWDNFCExpressTransactionStartedEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AWDNFCExpressTransactionStartedEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetric:(AWDNFCExpressTransactionStartedEvent *)arg1 ;
-(AWDNFCExpressTransactionStartedEvent *)metric;
-(id)getMetric;
-(id)init;
-(unsigned)getMetricId;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

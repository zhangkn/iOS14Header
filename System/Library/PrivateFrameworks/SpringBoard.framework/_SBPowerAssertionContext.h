/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SBPowerAssertionContext : NSObject {

	NSString* _processName;
	/*^block*/id _collectionBlock;

}

@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy) id collectionBlock;                  //@synthesize collectionBlock=_collectionBlock - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)processName;
-(id)collectionBlock;
-(void)setCollectionBlock:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DAOofParams.h>

@protocol DAOofResponseDelegate;
@class NSString;

@interface DAOofSettingsInfo : DAOofParams {

	NSString* _requestID;
	id<DAOofResponseDelegate> _consumer;

}

@property (nonatomic,retain) NSString * requestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic,__weak) id<DAOofResponseDelegate> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(void)setConsumer:(id<DAOofResponseDelegate>)arg1 ;
-(id<DAOofResponseDelegate>)consumer;
@end

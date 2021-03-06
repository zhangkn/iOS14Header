/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLConnection.h>

@class NSURLRequest, NSHTTPURLResponse, NSMutableData, NSData;

@interface IKURLConnection : NSURLConnection {

	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSMutableData* _data;
	id _userInfo;
	int _type;
	id _context;

}

@property (nonatomic,readonly) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) id userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) int type;                                  //@synthesize type=_type - In the implementation block
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(NSData *)data;
-(void)_setType:(int)arg1 ;
-(void)dealloc;
-(id)_context;
-(int)type;
-(id)userInfo;
-(NSURLRequest *)request;
-(NSHTTPURLResponse *)response;
-(void)_setContext:(id)arg1 ;
-(void)_setResponse:(id)arg1 ;
-(void)_appendData:(id)arg1 ;
-(void)_setUserInfo:(id)arg1 ;
@end


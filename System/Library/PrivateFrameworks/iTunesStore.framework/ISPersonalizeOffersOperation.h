/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation : ISOperation {

	ISPersonalizeOffersRequest* _request;
	SSPersonalizeOffersResponse* _response;

}

@property (readonly) ISPersonalizeOffersRequest * personalizeOffersReqeust; 
@property (readonly) SSPersonalizeOffersResponse * response; 
-(void)run;
-(void)dealloc;
-(SSPersonalizeOffersResponse *)response;
-(id)initWithPersonalizeOffersRequest:(id)arg1 ;
-(BOOL)_runWithURLDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id*)arg3 ;
-(void)_addDictionaryToResponse:(id)arg1 ;
-(ISPersonalizeOffersRequest *)personalizeOffersReqeust;
@end


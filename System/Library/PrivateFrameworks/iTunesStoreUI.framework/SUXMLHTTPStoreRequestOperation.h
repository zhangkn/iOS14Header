/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SSAuthenticationContext, ISDataProvider;

@interface SUXMLHTTPStoreRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	ISDataProvider* _dataProvider;

}

@property (nonatomic,retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) ISDataProvider * dataProvider;                                //@synthesize dataProvider=_dataProvider - In the implementation block
@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(void)run;
-(id)outputBlock;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setDataProvider:(ISDataProvider *)arg1 ;
-(ISDataProvider *)dataProvider;
@end


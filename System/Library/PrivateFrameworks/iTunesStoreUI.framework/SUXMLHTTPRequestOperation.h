/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties;

@interface SUXMLHTTPRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;

}

@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(void)run;
-(id)outputBlock;
-(id)initWithRequestProperties:(id)arg1 ;
-(BOOL)_isAllowedURL:(id)arg1 withURLBag:(id)arg2 ;
@end

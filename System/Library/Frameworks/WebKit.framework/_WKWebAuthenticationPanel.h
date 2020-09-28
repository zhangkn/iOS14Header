/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, NSSet;

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {

	ObjectStorage<API::WebAuthenticationPanel> _panel;
	WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter>* _client;
	RetainPtr<NSMutableSet>* _transports;

}

@property (assign,nonatomic,__weak) id<_WKWebAuthenticationPanelDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * relyingPartyID; 
@property (nonatomic,copy,readonly) NSSet * transports; 
@property (nonatomic,readonly) long long type; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearAllLocalAuthenticatorCredentials;
-(void)cancel;
-(Object*)_apiObject;
-(void)dealloc;
-(long long)type;
-(void)setDelegate:(id<_WKWebAuthenticationPanelDelegate>)arg1 ;
-(NSString *)relyingPartyID;
-(NSSet *)transports;
-(id<_WKWebAuthenticationPanelDelegate>)delegate;
@end

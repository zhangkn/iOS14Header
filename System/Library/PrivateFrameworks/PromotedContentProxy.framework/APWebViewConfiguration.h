/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKWebViewConfiguration, APUnfairLock;

@interface APWebViewConfiguration : NSObject {

	WKWebViewConfiguration* _webProcessConfiguration;
	WKWebViewConfiguration* _webProcessConfigurationWithBackgroundPriority;
	WKWebViewConfiguration* _videoConfiguration;
	WKWebViewConfiguration* _videoConfigurationWithBackgroundPriority;
	APUnfairLock* _webProcessConfigurationLock;
	APUnfairLock* _webProcessConfigurationWithBackgroundPriorityLock;
	APUnfairLock* _videoConfigurationLock;
	APUnfairLock* _videoConfigurationWithBackgroundPriorityLock;

}

@property (nonatomic,readonly) APUnfairLock * webProcessConfigurationLock;                                          //@synthesize webProcessConfigurationLock=_webProcessConfigurationLock - In the implementation block
@property (nonatomic,readonly) APUnfairLock * webProcessConfigurationWithBackgroundPriorityLock;                    //@synthesize webProcessConfigurationWithBackgroundPriorityLock=_webProcessConfigurationWithBackgroundPriorityLock - In the implementation block
@property (nonatomic,readonly) APUnfairLock * videoConfigurationLock;                                               //@synthesize videoConfigurationLock=_videoConfigurationLock - In the implementation block
@property (nonatomic,readonly) APUnfairLock * videoConfigurationWithBackgroundPriorityLock;                         //@synthesize videoConfigurationWithBackgroundPriorityLock=_videoConfigurationWithBackgroundPriorityLock - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webProcessConfiguration; 
@property (nonatomic,readonly) WKWebViewConfiguration * webProcessConfigurationWithBackgroundPriority; 
@property (nonatomic,readonly) WKWebViewConfiguration * videoConfiguration; 
@property (nonatomic,readonly) WKWebViewConfiguration * videoConfigurationWithBackgroundPriority; 
-(WKWebViewConfiguration *)videoConfiguration;
-(id)init;
-(WKWebViewConfiguration *)webProcessConfigurationWithBackgroundPriority;
-(APUnfairLock *)webProcessConfigurationLock;
-(id)_newSharedConfigurationWithBackgroundPriority:(BOOL)arg1 ;
-(APUnfairLock *)webProcessConfigurationWithBackgroundPriorityLock;
-(APUnfairLock *)videoConfigurationLock;
-(APUnfairLock *)videoConfigurationWithBackgroundPriorityLock;
-(id)_injectionScriptForResource:(id)arg1 injectionTime:(long long)arg2 ;
-(id)_injectionStyleForResource:(id)arg1 ;
-(id)_newProcessPoolWithBackgroundPriority:(BOOL)arg1 ;
-(WKWebViewConfiguration *)webProcessConfiguration;
-(WKWebViewConfiguration *)videoConfigurationWithBackgroundPriority;
@end

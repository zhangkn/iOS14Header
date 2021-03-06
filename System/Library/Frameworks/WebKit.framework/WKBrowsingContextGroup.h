/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPageGroup> _pageGroup;

}

@property (readonly) OpaqueWKPageGroupRef _pageGroupRef; 
@property (assign) BOOL allowsJavaScript; 
@property (assign) BOOL allowsPlugIns; 
@property (assign) BOOL privateBrowsingEnabled; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 ;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(Object*)_apiObject;
-(OpaqueWKPageGroupRef)_pageGroupRef;
-(void)setAllowsPlugIns:(BOOL)arg1 ;
-(void)removeAllUserStyleSheets;
-(void)setAllowsJavaScript:(BOOL)arg1 ;
-(void)dealloc;
-(void)removeAllUserScripts;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6 ;
-(BOOL)privateBrowsingEnabled;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 mainFrameOnly:(BOOL)arg5 ;
-(void)setAllowsJavaScriptMarkup:(BOOL)arg1 ;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6 ;
-(BOOL)allowsPlugIns;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(BOOL)arg5 ;
-(BOOL)allowsJavaScript;
-(BOOL)allowsJavaScriptMarkup;
@end


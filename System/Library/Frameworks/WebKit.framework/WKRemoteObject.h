/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKRemoteObject : NSObject {

	RetainPtr<_WKRemoteObjectRegistry>* _objectRegistry;
	RetainPtr<_WKRemoteObjectInterface>* _interface;

}
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
@end

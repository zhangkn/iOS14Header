/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/KmlSessionCallbacks.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCConnection, DASessionInternal, NSString;

@interface DASession : NSObject <KmlSessionCallbacks, NSSecureCoding> {

	NSXPCConnection* _clientConnection;
	DASessionInternal* _internal;
	BOOL _hasEnded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setProxy:(id)arg1 ;
-(void)didEnd:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)endSession;
-(id)getDelegate;
-(id)getRemoteProxy:(/*^block*/id)arg1 ;
-(void)didStart:(BOOL)arg1 ;
-(void)dispatchOnCallbackQueue:(/*^block*/id)arg1 ;
@end


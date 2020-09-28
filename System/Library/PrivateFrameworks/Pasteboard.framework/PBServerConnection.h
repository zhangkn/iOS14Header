/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Pasteboard/Pasteboard-Structs.h>
@class NSObject, NSXPCConnection;

@interface PBServerConnection : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSXPCConnection* _memberQ_serverConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * memberQ_serverConnection;              //@synthesize memberQ_serverConnection=_memberQ_serverConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * serverConnection; 
+(unsigned long long)beginListeningToPasteboardChangeNotifications;
+(id)defaultConnection;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 typeIdentifier:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)localGeneralPasteboardWithAuthenticationBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(unsigned long long)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 error:(id*)arg3 ;
-(void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didPastePasteboard:(id)arg1 ;
-(void)getAllPasteboardsCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)deletePersistentPasteboardWithName:(id)arg1 error:(id*)arg2 ;
-(id)localGeneralPasteboard:(id*)arg1 ;
-(id)init;
-(void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestPatternDetectionsFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 patterns:(id)arg5 needValues:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(unsigned)transparentSlotWithSize:(CGSize)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)serverConnection;
-(void)setMemberQ_serverConnection:(NSXPCConnection *)arg1 ;
-(void)localGeneralPasteboardCompletionBlock:(/*^block*/id)arg1 ;
-(NSXPCConnection *)memberQ_serverConnection;
-(id)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 authenticationBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getAllPasteboardsWithAuthenticationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)helloCompletionBlock:(/*^block*/id)arg1 ;
-(void)performJanitorialTasksCompletionBlock:(/*^block*/id)arg1 ;
-(id)pasteboardWithName:(id)arg1 error:(id*)arg2 ;
-(void)pasteboardWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 authenticationBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)localGeneralPasteboardWithAuthenticationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

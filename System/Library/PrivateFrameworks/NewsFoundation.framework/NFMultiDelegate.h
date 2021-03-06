/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, Protocol;

@interface NFMultiDelegate : NSObject {

	NSHashTable* _children;
	Protocol* _delegateProtocol;

}

@property (nonatomic,readonly) NSHashTable * children;                   //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) Protocol * delegateProtocol;              //@synthesize delegateProtocol=_delegateProtocol - In the implementation block
@property (nonatomic,readonly) id delegate; 
-(NSHashTable *)children;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)delegate;
-(void)replaceDelegate:(id)arg1 withDelegate:(id)arg2 ;
-(Protocol *)delegateProtocol;
@end


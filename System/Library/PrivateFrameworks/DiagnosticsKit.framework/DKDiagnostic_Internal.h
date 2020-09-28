/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKDiagnostic_Internal <DKDiagnostic>
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
@property (assign,getter=isSetup,nonatomic) BOOL setup; 
@required
-(BOOL)isSetup;
-(void)setCancelled:(BOOL)arg1;
-(void)setSetup:(BOOL)arg1;
-(BOOL)isCancelled;

@end

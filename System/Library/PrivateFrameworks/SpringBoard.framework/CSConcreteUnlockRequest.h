/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSUnlockRequest.h>

@class NSString;

@interface CSConcreteUnlockRequest : NSObject <CSUnlockRequest> {

	BOOL wantsBiometricPresentation;
	BOOL confirmedNotInPocket;
	int source;
	int intent;
	NSString* name;

}

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int intent; 
@property (assign,nonatomic) BOOL wantsBiometricPresentation; 
@property (assign,nonatomic) BOOL confirmedNotInPocket; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIntent:(int)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)intent;
-(void)setName:(NSString *)arg1 ;
-(BOOL)wantsBiometricPresentation;
-(void)setWantsBiometricPresentation:(BOOL)arg1 ;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1 ;
-(int)source;
-(NSString *)name;
@end

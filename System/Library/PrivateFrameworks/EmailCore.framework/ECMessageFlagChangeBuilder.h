/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECMessageFlagChangeBuilder
@property (assign,nonatomic) long long reason; 
@required
-(void)setReason:(long long)arg1;
-(void)changesReadTo:(BOOL)arg1;
-(void)changesDeletedTo:(BOOL)arg1;
-(void)changesRepliedTo:(BOOL)arg1;
-(void)changesFlaggedTo:(BOOL)arg1;
-(void)changesFlagColorTo:(unsigned long long)arg1;
-(void)changesForwardedTo:(BOOL)arg1;
-(void)changesRedirectedTo:(BOOL)arg1;
-(void)changesJunkLevelTo:(unsigned long long)arg1;
-(long long)reason;
-(void)changesDraftTo:(BOOL)arg1;
-(void)changesJunkLevelSetByUserTo:(BOOL)arg1;

@end


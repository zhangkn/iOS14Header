/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTTCallDelegate <NSObject>
@required
-(void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3;
-(void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;
-(void)ttyCall:(id)arg1 setVisible:(BOOL)arg2 serviceUpdate:(id)arg3;

@end

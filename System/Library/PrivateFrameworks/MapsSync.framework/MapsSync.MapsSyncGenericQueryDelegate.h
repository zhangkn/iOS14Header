/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSync.MapsSyncGenericQueryDelegate
@required
-(void)queryContentsDidChangeWithNotification:(id)arg1;
-(void)queryContextDidChangeWithNotification:(id)arg1;
-(void)queryStoreDidChangeWithNotification:(id)arg1;
-(void)queryContentsWillChangeWithNotification:(id)arg1;
-(void)queryContentsDidChangeObjectWithNotification:(id)arg1 object:(id)arg2 indexPath:(id)arg3 changeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
-(void)queryContentsDidLoadWithNotification:(id)arg1;

@end

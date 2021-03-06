/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKFollowUpProvider <NSObject>
@required
-(id)pendingFollowUpItems:(id*)arg1;
-(BOOL)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)removeAllFollowUpItems:(id*)arg1;
-(BOOL)addFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)removeFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)clearNotificationsForItem:(id)arg1 error:(id*)arg2;

@end


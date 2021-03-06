/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _SFTableViewDiffableDataSourceDelegate;
@interface _SFTableViewDiffableDataSource : UITableViewDiffableDataSource {

	id<_SFTableViewDiffableDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFTableViewDiffableDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setDelegate:(id<_SFTableViewDiffableDataSourceDelegate>)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<_SFTableViewDiffableDataSourceDelegate>)delegate;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end


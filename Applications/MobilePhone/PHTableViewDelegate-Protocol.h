//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSArray, UITableView;

@protocol PHTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 performReloadRowsAtIndexPaths:(NSArray *)arg2 withRowAnimation:(long long)arg3 completion:(void (^)(void))arg4;
- (_Bool)tableViewCanPerformReloadData:(UITableView *)arg1;
@end


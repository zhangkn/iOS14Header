/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKPassesDataSourceObserver <NSObject>
@optional
-(void)passesDataSource:(id)arg1 didUpdateSettingsForPass:(id)arg2;

@required
-(void)passesDataSource:(id)arg1 didAddPasses:(id)arg2;
-(void)passesDataSourceDidReorderPasses:(id)arg1;
-(void)passesDataSource:(id)arg1 didRemovePasses:(id)arg2;
-(void)passesDataSource:(id)arg1 didUpdatePasses:(id)arg2;
-(void)passesDataSourceDidReloadPasses:(id)arg1;

@end


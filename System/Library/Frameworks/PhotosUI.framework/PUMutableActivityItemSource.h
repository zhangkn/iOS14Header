/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PUMutableActivityItemSource <NSObject>
@property (assign,nonatomic) unsigned long long state; 
@property (assign,nonatomic) SCD_Struct_PU12 sharingPreferences; 
@required
-(void)setState:(unsigned long long)arg1;
-(SCD_Struct_PU12)sharingPreferences;
-(void)setSharingPreferences:(SCD_Struct_PU12)arg1;
-(unsigned long long)state;

@end

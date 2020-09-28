/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoAccessoryItemSizing.h>

@class NSString;

@interface SVVideoAccessoryItemSizer : NSObject <SVVideoAccessoryItemSizing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)frameOfLeadingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGRect)frameOfTrailingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGSize)sizeForDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGPoint)originForLeadingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(CGSize)arg2 itemSize:(CGSize)arg3 ;
-(CGPoint)originForTrailingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(CGSize)arg2 itemSize:(CGSize)arg3 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICLocation.h>
#import <libobjc.A.dylib/ICSearchIndexableTarget.h>

@class NSString, ICAttachment;

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL placeUpdated; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (nonatomic,readonly) NSString * formattedAddressWithoutAttachmentTitle; 
+(id)newAttachmentLocationForAttachment:(id)arg1 ;
-(id)targetSearchIndexable;
-(NSString *)formattedAddressWithoutAttachmentTitle;
@end

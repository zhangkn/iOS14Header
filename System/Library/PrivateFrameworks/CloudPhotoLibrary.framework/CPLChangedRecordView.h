/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordView.h>

@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView {

	CPLRecordView* _baseRecordView;
	CPLRecordChange* _change;

}

@property (nonatomic,readonly) CPLRecordView * baseRecordView;              //@synthesize baseRecordView=_baseRecordView - In the implementation block
@property (nonatomic,readonly) CPLRecordChange * change;                    //@synthesize change=_change - In the implementation block
-(id)redactedDescription;
-(id)scopedIdentifier;
-(Class)recordClass;
-(BOOL)supportsResources;
-(id)description;
-(CPLRecordChange *)change;
-(id)synthesizedRecord;
-(id)initWithChange:(id)arg1 overRecordView:(id)arg2 ;
-(id)changeForType:(unsigned long long)arg1 ;
-(CPLRecordView *)baseRecordView;
@end


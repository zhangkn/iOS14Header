/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface CDBAttachmentInfo : NSObject {

	NSURL* _legacyURL;
	NSURL* _url;
	NSString* _localRelativePath;

}

@property (nonatomic,copy,readonly) NSURL * legacyURL;                         //@synthesize legacyURL=_legacyURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * localRelativePath;              //@synthesize localRelativePath=_localRelativePath - In the implementation block
-(NSString *)localRelativePath;
-(NSURL *)url;
-(NSURL *)legacyURL;
-(id)initWithLegacyURL:(id)arg1 url:(id)arg2 localRelativePath:(id)arg3 ;
@end


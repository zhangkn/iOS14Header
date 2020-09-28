/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface NADelegateMethodLogSettings : NSObject {

	unsigned char _logType;
	NSObject*<OS_os_log> _log;
	/*^block*/id _argumentFormatter;
	/*^block*/id _logger;

}

@property (nonatomic,copy,readonly) id argumentFormatter;              //@synthesize argumentFormatter=_argumentFormatter - In the implementation block
@property (nonatomic,copy) id logger;                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;               //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) unsigned char logType;                  //@synthesize logType=_logType - In the implementation block
-(id)logger;
-(unsigned char)logType;
-(NSObject*<OS_os_log>)log;
-(id)initWithLog:(id)arg1 logType:(unsigned char)arg2 argumentFormatter:(/*^block*/id)arg3 ;
-(id)init;
-(void)setLogger:(id)arg1 ;
-(id)formattedDescriptionForArgument:(id)arg1 ;
-(id)argumentFormatter;
@end

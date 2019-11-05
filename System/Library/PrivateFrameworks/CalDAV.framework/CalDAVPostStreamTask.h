/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask {

	NSString* _previousScheduleTag;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * previousScheduleTag;              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (nonatomic,retain) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)responseData;
-(id)requestBody;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)requestBodyStream;
-(NSString *)previousScheduleTag;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)lossyAsciiFilename;
-(id)utf8PercentEscapedFilename;
@end

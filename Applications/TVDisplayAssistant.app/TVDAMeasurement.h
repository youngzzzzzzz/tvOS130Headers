/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:56:07 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDisplayAssistant.app/TVDisplayAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TVDAMeasurement <NSObject>
@property (nonatomic,copy,readonly) NSString * measurementTitle; 
@required
-(void)cancel;
-(void)measureWithCompletion:(/*^block*/id)arg1;
-(NSString *)measurementTitle;

@end

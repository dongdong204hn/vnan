//
//  Constants.h
//  VOA
//
//  Created by song zhao on 12-4-27.
//  Copyright (c) 2012年 buaa. All rights reserved.
//


extern NSString * const kEgoOne;
extern NSString * const kEgoTwo;
extern NSString * const kEgoThree;

extern NSString * const kVoaWordOne;
extern NSString * const kVoaWordTwo;
extern NSString * const kVoaSentenceTwo;

extern NSString * const kSearchOne;
extern NSString * const kSearchTwo;
extern NSString * const kSearchThree;
extern NSString * const kSearchFour;
extern NSString * const kSearchFive;
extern NSString * const kSearchSix;
extern NSString * const kSearchSeven;
extern NSString * const kSearchEight;
extern NSString * const kSearchNine;
extern NSString * const kSearchTen;
extern NSString * const kSearchEleven;
extern NSString * const kSearchTwelve;

extern NSString * const kFeedbackOne;
extern NSString * const kFeedbackTwo;
extern NSString * const kFeedbackThree;
extern NSString * const kFeedbackFour;
extern NSString * const kFeedbackFive;
extern NSString * const kFeedbacksix;

extern NSString * const kHelpOne;

extern NSString * const kInfoOne;
extern NSString * const kInfoTwo;
extern NSString * const kInfoThree;

extern NSString * const kInfoConOne;
extern NSString * const kInfoConTwo;

extern NSString * const kLogOne;
extern NSString * const kLogTwo;
extern NSString * const kLogThree;
extern NSString * const kLogFour;
extern NSString * const kLogFive;
extern NSString * const kLogSix;
extern NSString * const kLogSeven;
extern NSString * const kLogEight;
extern NSString * const kLogNine;
extern NSString * const kLogTen;
extern NSString * const kLogEleven;

extern NSString * const kRegOne;
extern NSString * const kRegTwo;
extern NSString * const kRegThree;
extern NSString * const kRegFour;
extern NSString * const kRegFive;
extern NSString * const kRegSix;
extern NSString * const kRegSeven;
extern NSString * const kRegEight;
extern NSString * const kRegNine;
extern NSString * const kRegTen;
extern NSString * const kRegEleven;

extern NSString * const kColOne;
extern NSString * const kColTwo;
extern NSString * const kColThree;
extern NSString * const kColFour;
extern NSString * const kColFive;
extern NSString * const kColSix;
extern NSString * const kColSeven;

extern NSString * const kWordOne;
extern NSString * const kWordTwo;
extern NSString * const kWordThree;
extern NSString * const kWordFour;
extern NSString * const kWordFive;
extern NSString * const kWordSix;
extern NSString * const kWordSeven;
extern NSString * const kWordEight;
extern NSString * const kWordNine;

extern NSString * const kNewOne;
extern NSString * const kNewTwo;
extern NSString * const kNewThree;
extern NSString * const kNewFour;
extern NSString * const kNewFive;
extern NSString * const kNewSix;

extern NSString * const kClassOne;
extern NSString * const kClassAll;
extern NSString * const kClassTwo;
extern NSString * const kClassThree;
extern NSString * const kClassFour;
extern NSString * const kClassFive;
extern NSString * const kClassSix;
extern NSString * const kClassSeven;
extern NSString * const kClassEight;
extern NSString * const kClassNine;
extern NSString * const kClassTen;
extern NSString * const kClassEleven;

extern NSString * const kPlayOne;
extern NSString * const kPlayTwo;
extern NSString * const kPlayThree;
extern NSString * const kPlayFour;
extern NSString * const kPlayFive;
extern NSString * const kPlaySix;
extern NSString * const kPlaySeven;
extern NSString * const kPlayEight;

extern NSString * const kSentenceOne;
extern NSString * const kSentenceTwo;

extern NSString * const kLyricOne;

extern NSString * const kAudioOne;
#define kBePro @"com.iyuba.VOANLN.update"

#define kMyWebLink @"https://itunes.apple.com/us/app/ai-yu-bavoa-chang-su-ying-yu/id553414030?ls=1&mt=8"
#define kMyRenRenImage @"http://app.iyuba.com/ios/icons/changsu512.png"

#define kNetIsExist [[NetTest sharedNet] isExisitNet]

#define kNetTest [[NetTest sharedNet] catchNet]

#define kNetEnable [[NetTest sharedNet] netEnable]

#define kNetDisable [[NetTest sharedNet] netDisable]

#define isiPhone5 [[UIScreen mainScreen] bounds].size.height == 568.000000

#define kViewHeight  self.view.frame.size.height

@interface Constants : NSObject
+ (BOOL)isPad;
@end

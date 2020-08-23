// SPCreditCell.h

#import <Preferences/PSSpecifier.h>
#import <Preferences/PSTableCell.h>

@interface SPCreditCell : PSTableCell

@property(nonatomic, retain) UIImageView *creditImageView;
@property(nonatomic, assign) UIImage *creditImage;
@property(nonatomic, assign) NSString *twitterUsername;

@end

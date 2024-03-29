
/*
 *@@sourcefile iso8859_6.h:
 *      encoding translation for iso8859_6 to Unicode.
 *
 *@@added V0.9.9 (2001-02-10) [umoeller]
 */

XWPENCODINGMAP G_iso8859_6[] =
{
//
//    Name:             ISO 8859-6:1999 to Unicode
//    Unicode version:  3.0
//    Table version:    1.0
//    Table format:     Format A
//    Date:             1999 July 27
//    Authors:          Ken Whistler <kenw@sybase.com>
//
//    Copyright (c) 1991-1999 Unicode, Inc.  All Rights reserved.
//
//    This file is provided as-is by Unicode, Inc. (The Unicode Consortium).
//    No claims are made as to fitness for any particular purpose.  No
//    warranties of any kind are expressed or implied.  The recipient
//    agrees to determine applicability of information provided.  If this
//    file has been provided on optical media by Unicode, Inc., the sole
//    remedy for any claim will be exchange of defective media within 90
//    days of receipt.
//
//    Unicode, Inc. hereby grants the right to freely use the information
//    supplied in this file in the creation of products supporting the
//    Unicode Standard, and to make copies of this file in any form for
//    internal or external distribution as long as this notice remains
//    attached.
//
//    General notes:
//
//    This table contains the data the Unicode Consortium has on how
//        ISO/IEC 8859-6:1999 characters map into Unicode.
//
//    Format:  Three tab-separated columns
//         Column #1 is the ISO/IEC 8859-6 code (in hex as 0xXX)
//         Column #2 is the Unicode (in hex as 0xXXXX)
//         Column #3 the Unicode name (follows a comment sign, '#')
//
//    The entries are in ISO/IEC 8859-6 order.
//
//    Version history
//    1.0 version updates 0.1 version by adding mappings for all
//    control characters.
//    0x30..0x39 remapped to the ASCII digits (U+0030..U+0039) instead
//    of the Arabic digits (U+0660..U+0669).
//
//    Updated versions of this file may be found in:
//        <ftp://ftp.unicode.org/Public/MAPPINGS/>
//
//    Any comments or problems, contact <errata@unicode.org>
//    Please note that <errata@unicode.org> is an archival address;
//    notices will be checked, but do not expect an immediate response.
//
    0x00, 0x0000, //    NULL
    0x01, 0x0001, //    START OF HEADING
    0x02, 0x0002, //    START OF TEXT
    0x03, 0x0003, //    END OF TEXT
    0x04, 0x0004, //    END OF TRANSMISSION
    0x05, 0x0005, //    ENQUIRY
    0x06, 0x0006, //    ACKNOWLEDGE
    0x07, 0x0007, //    BELL
    0x08, 0x0008, //    BACKSPACE
    0x09, 0x0009, //    HORIZONTAL TABULATION
    0x0A, 0x000A, //    LINE FEED
    0x0B, 0x000B, //    VERTICAL TABULATION
    0x0C, 0x000C, //    FORM FEED
    0x0D, 0x000D, //    CARRIAGE RETURN
    0x0E, 0x000E, //    SHIFT OUT
    0x0F, 0x000F, //    SHIFT IN
    0x10, 0x0010, //    DATA LINK ESCAPE
    0x11, 0x0011, //    DEVICE CONTROL ONE
    0x12, 0x0012, //    DEVICE CONTROL TWO
    0x13, 0x0013, //    DEVICE CONTROL THREE
    0x14, 0x0014, //    DEVICE CONTROL FOUR
    0x15, 0x0015, //    NEGATIVE ACKNOWLEDGE
    0x16, 0x0016, //    SYNCHRONOUS IDLE
    0x17, 0x0017, //    END OF TRANSMISSION BLOCK
    0x18, 0x0018, //    CANCEL
    0x19, 0x0019, //    END OF MEDIUM
    0x1A, 0x001A, //    SUBSTITUTE
    0x1B, 0x001B, //    ESCAPE
    0x1C, 0x001C, //    FILE SEPARATOR
    0x1D, 0x001D, //    GROUP SEPARATOR
    0x1E, 0x001E, //    RECORD SEPARATOR
    0x1F, 0x001F, //    UNIT SEPARATOR
    0x20, 0x0020, //    SPACE
    0x21, 0x0021, //    EXCLAMATION MARK
    0x22, 0x0022, //    QUOTATION MARK
    0x23, 0x0023, //    NUMBER SIGN
    0x24, 0x0024, //    DOLLAR SIGN
    0x25, 0x0025, //    PERCENT SIGN
    0x26, 0x0026, //    AMPERSAND
    0x27, 0x0027, //    APOSTROPHE
    0x28, 0x0028, //    LEFT PARENTHESIS
    0x29, 0x0029, //    RIGHT PARENTHESIS
    0x2A, 0x002A, //    ASTERISK
    0x2B, 0x002B, //    PLUS SIGN
    0x2C, 0x002C, //    COMMA
    0x2D, 0x002D, //    HYPHEN-MINUS
    0x2E, 0x002E, //    FULL STOP
    0x2F, 0x002F, //    SOLIDUS
    0x30, 0x0030, //    DIGIT ZERO
    0x31, 0x0031, //    DIGIT ONE
    0x32, 0x0032, //    DIGIT TWO
    0x33, 0x0033, //    DIGIT THREE
    0x34, 0x0034, //    DIGIT FOUR
    0x35, 0x0035, //    DIGIT FIVE
    0x36, 0x0036, //    DIGIT SIX
    0x37, 0x0037, //    DIGIT SEVEN
    0x38, 0x0038, //    DIGIT EIGHT
    0x39, 0x0039, //    DIGIT NINE
    0x3A, 0x003A, //    COLON
    0x3B, 0x003B, //    SEMICOLON
    0x3C, 0x003C, //    LESS-THAN SIGN
    0x3D, 0x003D, //    EQUALS SIGN
    0x3E, 0x003E, //    GREATER-THAN SIGN
    0x3F, 0x003F, //    QUESTION MARK
    0x40, 0x0040, //    COMMERCIAL AT
    0x41, 0x0041, //    LATIN CAPITAL LETTER A
    0x42, 0x0042, //    LATIN CAPITAL LETTER B
    0x43, 0x0043, //    LATIN CAPITAL LETTER C
    0x44, 0x0044, //    LATIN CAPITAL LETTER D
    0x45, 0x0045, //    LATIN CAPITAL LETTER E
    0x46, 0x0046, //    LATIN CAPITAL LETTER F
    0x47, 0x0047, //    LATIN CAPITAL LETTER G
    0x48, 0x0048, //    LATIN CAPITAL LETTER H
    0x49, 0x0049, //    LATIN CAPITAL LETTER I
    0x4A, 0x004A, //    LATIN CAPITAL LETTER J
    0x4B, 0x004B, //    LATIN CAPITAL LETTER K
    0x4C, 0x004C, //    LATIN CAPITAL LETTER L
    0x4D, 0x004D, //    LATIN CAPITAL LETTER M
    0x4E, 0x004E, //    LATIN CAPITAL LETTER N
    0x4F, 0x004F, //    LATIN CAPITAL LETTER O
    0x50, 0x0050, //    LATIN CAPITAL LETTER P
    0x51, 0x0051, //    LATIN CAPITAL LETTER Q
    0x52, 0x0052, //    LATIN CAPITAL LETTER R
    0x53, 0x0053, //    LATIN CAPITAL LETTER S
    0x54, 0x0054, //    LATIN CAPITAL LETTER T
    0x55, 0x0055, //    LATIN CAPITAL LETTER U
    0x56, 0x0056, //    LATIN CAPITAL LETTER V
    0x57, 0x0057, //    LATIN CAPITAL LETTER W
    0x58, 0x0058, //    LATIN CAPITAL LETTER X
    0x59, 0x0059, //    LATIN CAPITAL LETTER Y
    0x5A, 0x005A, //    LATIN CAPITAL LETTER Z
    0x5B, 0x005B, //    LEFT SQUARE BRACKET
    0x5C, 0x005C, //    REVERSE SOLIDUS
    0x5D, 0x005D, //    RIGHT SQUARE BRACKET
    0x5E, 0x005E, //    CIRCUMFLEX ACCENT
    0x5F, 0x005F, //    LOW LINE
    0x60, 0x0060, //    GRAVE ACCENT
    0x61, 0x0061, //    LATIN SMALL LETTER A
    0x62, 0x0062, //    LATIN SMALL LETTER B
    0x63, 0x0063, //    LATIN SMALL LETTER C
    0x64, 0x0064, //    LATIN SMALL LETTER D
    0x65, 0x0065, //    LATIN SMALL LETTER E
    0x66, 0x0066, //    LATIN SMALL LETTER F
    0x67, 0x0067, //    LATIN SMALL LETTER G
    0x68, 0x0068, //    LATIN SMALL LETTER H
    0x69, 0x0069, //    LATIN SMALL LETTER I
    0x6A, 0x006A, //    LATIN SMALL LETTER J
    0x6B, 0x006B, //    LATIN SMALL LETTER K
    0x6C, 0x006C, //    LATIN SMALL LETTER L
    0x6D, 0x006D, //    LATIN SMALL LETTER M
    0x6E, 0x006E, //    LATIN SMALL LETTER N
    0x6F, 0x006F, //    LATIN SMALL LETTER O
    0x70, 0x0070, //    LATIN SMALL LETTER P
    0x71, 0x0071, //    LATIN SMALL LETTER Q
    0x72, 0x0072, //    LATIN SMALL LETTER R
    0x73, 0x0073, //    LATIN SMALL LETTER S
    0x74, 0x0074, //    LATIN SMALL LETTER T
    0x75, 0x0075, //    LATIN SMALL LETTER U
    0x76, 0x0076, //    LATIN SMALL LETTER V
    0x77, 0x0077, //    LATIN SMALL LETTER W
    0x78, 0x0078, //    LATIN SMALL LETTER X
    0x79, 0x0079, //    LATIN SMALL LETTER Y
    0x7A, 0x007A, //    LATIN SMALL LETTER Z
    0x7B, 0x007B, //    LEFT CURLY BRACKET
    0x7C, 0x007C, //    VERTICAL LINE
    0x7D, 0x007D, //    RIGHT CURLY BRACKET
    0x7E, 0x007E, //    TILDE
    0x7F, 0x007F, //    DELETE
    0x80, 0x0080, //    <control>
    0x81, 0x0081, //    <control>
    0x82, 0x0082, //    <control>
    0x83, 0x0083, //    <control>
    0x84, 0x0084, //    <control>
    0x85, 0x0085, //    <control>
    0x86, 0x0086, //    <control>
    0x87, 0x0087, //    <control>
    0x88, 0x0088, //    <control>
    0x89, 0x0089, //    <control>
    0x8A, 0x008A, //    <control>
    0x8B, 0x008B, //    <control>
    0x8C, 0x008C, //    <control>
    0x8D, 0x008D, //    <control>
    0x8E, 0x008E, //    <control>
    0x8F, 0x008F, //    <control>
    0x90, 0x0090, //    <control>
    0x91, 0x0091, //    <control>
    0x92, 0x0092, //    <control>
    0x93, 0x0093, //    <control>
    0x94, 0x0094, //    <control>
    0x95, 0x0095, //    <control>
    0x96, 0x0096, //    <control>
    0x97, 0x0097, //    <control>
    0x98, 0x0098, //    <control>
    0x99, 0x0099, //    <control>
    0x9A, 0x009A, //    <control>
    0x9B, 0x009B, //    <control>
    0x9C, 0x009C, //    <control>
    0x9D, 0x009D, //    <control>
    0x9E, 0x009E, //    <control>
    0x9F, 0x009F, //    <control>
    0xA0, 0x00A0, //    NO-BREAK SPACE
    0xA4, 0x00A4, //    CURRENCY SIGN
    0xAC, 0x060C, //    ARABIC COMMA
    0xAD, 0x00AD, //    SOFT HYPHEN
    0xBB, 0x061B, //    ARABIC SEMICOLON
    0xBF, 0x061F, //    ARABIC QUESTION MARK
    0xC1, 0x0621, //    ARABIC LETTER HAMZA
    0xC2, 0x0622, //    ARABIC LETTER ALEF WITH MADDA ABOVE
    0xC3, 0x0623, //    ARABIC LETTER ALEF WITH HAMZA ABOVE
    0xC4, 0x0624, //    ARABIC LETTER WAW WITH HAMZA ABOVE
    0xC5, 0x0625, //    ARABIC LETTER ALEF WITH HAMZA BELOW
    0xC6, 0x0626, //    ARABIC LETTER YEH WITH HAMZA ABOVE
    0xC7, 0x0627, //    ARABIC LETTER ALEF
    0xC8, 0x0628, //    ARABIC LETTER BEH
    0xC9, 0x0629, //    ARABIC LETTER TEH MARBUTA
    0xCA, 0x062A, //    ARABIC LETTER TEH
    0xCB, 0x062B, //    ARABIC LETTER THEH
    0xCC, 0x062C, //    ARABIC LETTER JEEM
    0xCD, 0x062D, //    ARABIC LETTER HAH
    0xCE, 0x062E, //    ARABIC LETTER KHAH
    0xCF, 0x062F, //    ARABIC LETTER DAL
    0xD0, 0x0630, //    ARABIC LETTER THAL
    0xD1, 0x0631, //    ARABIC LETTER REH
    0xD2, 0x0632, //    ARABIC LETTER ZAIN
    0xD3, 0x0633, //    ARABIC LETTER SEEN
    0xD4, 0x0634, //    ARABIC LETTER SHEEN
    0xD5, 0x0635, //    ARABIC LETTER SAD
    0xD6, 0x0636, //    ARABIC LETTER DAD
    0xD7, 0x0637, //    ARABIC LETTER TAH
    0xD8, 0x0638, //    ARABIC LETTER ZAH
    0xD9, 0x0639, //    ARABIC LETTER AIN
    0xDA, 0x063A, //    ARABIC LETTER GHAIN
    0xE0, 0x0640, //    ARABIC TATWEEL
    0xE1, 0x0641, //    ARABIC LETTER FEH
    0xE2, 0x0642, //    ARABIC LETTER QAF
    0xE3, 0x0643, //    ARABIC LETTER KAF
    0xE4, 0x0644, //    ARABIC LETTER LAM
    0xE5, 0x0645, //    ARABIC LETTER MEEM
    0xE6, 0x0646, //    ARABIC LETTER NOON
    0xE7, 0x0647, //    ARABIC LETTER HEH
    0xE8, 0x0648, //    ARABIC LETTER WAW
    0xE9, 0x0649, //    ARABIC LETTER ALEF MAKSURA
    0xEA, 0x064A, //    ARABIC LETTER YEH
    0xEB, 0x064B, //    ARABIC FATHATAN
    0xEC, 0x064C, //    ARABIC DAMMATAN
    0xED, 0x064D, //    ARABIC KASRATAN
    0xEE, 0x064E, //    ARABIC FATHA
    0xEF, 0x064F, //    ARABIC DAMMA
    0xF0, 0x0650, //    ARABIC KASRA
    0xF1, 0x0651, //    ARABIC SHADDA
    0xF2, 0x0652  //    ARABIC SUKUN
};

